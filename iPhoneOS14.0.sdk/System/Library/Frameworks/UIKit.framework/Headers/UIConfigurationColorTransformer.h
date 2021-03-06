#if (defined(USE_UIKIT_PUBLIC_HEADERS) && USE_UIKIT_PUBLIC_HEADERS) || !__has_include(<UIKitCore/UIConfigurationColorTransformer.h>)
//
//  UIConfigurationColorTransformer.h
//  UIKit
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

NS_ASSUME_NONNULL_BEGIN

@class UIColor;

/// A color transformer returns a modified output color based on an input color.
typedef UIColor *_Nonnull (^UIConfigurationColorTransformer)(UIColor *color) API_AVAILABLE(ios(14.0), tvos(14.0), watchos(7.0));


/// A color transformer that returns a grayscale version of the color.
UIKIT_EXTERN const UIConfigurationColorTransformer UIConfigurationColorTransformerGrayscale API_AVAILABLE(ios(14.0), tvos(14.0), watchos(7.0));

NS_ASSUME_NONNULL_END

#else
#import <UIKitCore/UIConfigurationColorTransformer.h>
#endif
