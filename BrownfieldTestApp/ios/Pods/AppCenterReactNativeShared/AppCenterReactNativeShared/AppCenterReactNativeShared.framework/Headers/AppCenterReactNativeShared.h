// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#import <Foundation/Foundation.h>

@interface AppCenterReactNativeShared : NSObject

+ (void) setAppSecret: (NSString *)secret;

+ (NSString *) getAppSecret;

+ (void) configureAppCenter;

+ (MSWrapperSdk *) getWrapperSdk;

+ (void) setWrapperSdk:(MSWrapperSdk *)sdk;

@end
