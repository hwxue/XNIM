//
//  WBIMManager.h
//  IMTest
//
//  Created by mac on 2019/6/26.
//  Copyright © 2019 mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface WBIMManager : NSObject

+ (instancetype)shareManager;
- (void)WB_initSDK;
- (UIViewController *)WBPushchatViewControllerWithChatParam;
- (void)WBSendMessageWithChatController:(UIViewController *)VC AndMessage:(NSString *)message;
- (void)WBLogout;

@end

NS_ASSUME_NONNULL_END
