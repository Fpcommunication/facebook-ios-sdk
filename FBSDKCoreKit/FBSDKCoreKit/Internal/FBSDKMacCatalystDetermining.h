/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// An interface for indicating whether a process originated as an iOS app and runs on macOS.
NS_SWIFT_NAME(MacCatalystDetermining)
@protocol FBSDKMacCatalystDetermining

@property (readonly) BOOL fb_isMacCatalystApp;

@end

NS_ASSUME_NONNULL_END
