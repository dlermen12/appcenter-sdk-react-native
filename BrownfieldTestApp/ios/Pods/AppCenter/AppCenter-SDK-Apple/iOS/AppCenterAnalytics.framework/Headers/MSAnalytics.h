// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#import "MSServiceAbstract.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * App Center analytics service.
 */
@interface MSAnalytics : MSServiceAbstract

/**
 * Track an event.
 *
 * @param eventName  event name.
 */
+ (void)trackEvent:(NSString *)eventName;

/**
 * Track an event.
 *
 * @param eventName  event name.
 * @param properties dictionary of properties.
 */
+ (void)trackEvent:(NSString *)eventName withProperties:(nullable NSDictionary<NSString *, NSString *> *)properties;

@end

NS_ASSUME_NONNULL_END
