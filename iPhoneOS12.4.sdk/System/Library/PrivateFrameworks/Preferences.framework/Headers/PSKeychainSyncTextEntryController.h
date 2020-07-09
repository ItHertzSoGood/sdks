//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSKeychainSyncViewController.h>

#import <Preferences/KeychainSyncPasscodeFieldDelegate-Protocol.h>

@class NSString, PSSpecifier, PSTableCell, UIView;
@protocol UIKeyInput;

@interface PSKeychainSyncTextEntryController : PSKeychainSyncViewController <KeychainSyncPasscodeFieldDelegate>
{
    PSTableCell *_textEntryCell;
    UIView<UIKeyInput> *_textEntryView;
    PSSpecifier *_textEntrySpecifier;
    _Bool _hidesNextButton;
    _Bool _secureTextEntry;
    _Bool _textFieldHasRoundBorder;
    _Bool _convertsNumeralsToASCII;
    int _textEntryType;
    unsigned long long _numberOfPasscodeFields;
    NSString *_textValue;
}

@property(retain, nonatomic) NSString *textValue; // @synthesize textValue=_textValue;
@property(nonatomic) unsigned long long numberOfPasscodeFields; // @synthesize numberOfPasscodeFields=_numberOfPasscodeFields;
@property(nonatomic) _Bool convertsNumeralsToASCII; // @synthesize convertsNumeralsToASCII=_convertsNumeralsToASCII;
@property(nonatomic) _Bool textFieldHasRoundBorder; // @synthesize textFieldHasRoundBorder=_textFieldHasRoundBorder;
@property(nonatomic) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) _Bool hidesNextButton; // @synthesize hidesNextButton=_hidesNextButton;
@property(nonatomic) int textEntryType; // @synthesize textEntryType=_textEntryType;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)passcodeField:(id)arg1 didUpdateEnteredPasscode:(id)arg2;
- (void)textFieldChanged:(id)arg1;
- (void)textEntryViewDidChange:(id)arg1;
- (id)textEntryView;
- (id)textEntryCell;
- (Class)textEntryCellClass;
- (id)textEntrySpecifier;
- (id)placeholderText;
- (id)specifiers;
- (id)textEntryText;
- (void)setTextEntryText:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willBecomeActive;
- (_Bool)becomeFirstResponder;
- (id)getTextValueForSpecifier:(id)arg1;
- (void)setTextValue:(id)arg1 forSpecifier:(id)arg2;
- (void)didFinishEnteringText:(id)arg1;
- (void)nextPressed;
- (void)updateNextButton;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

