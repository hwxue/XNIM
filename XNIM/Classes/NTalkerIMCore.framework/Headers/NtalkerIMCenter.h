//
//  NtalkerIMCenter.h
//  NTalkerIMCore
//
//  Created by wzh on 2019/4/10.
//  Copyright © 2019 NTalker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NtalkerSiteInfo.h"

@class NetworkMessage_DocumentMessage,NetworkMessage_OrderMessage,NtalkerSiteInfo;

@protocol NtalkerIMCenterDelegate <NSObject>

/**
 下行消息回调
 
 @param message 消息
 */
- (void)didReceiveMessage:(NetworkMessage_DocumentMessage *)message;

/**
 上行消息回执
 
 @param message 回执内容
 */
- (void)didDeliverMessage:(NetworkMessage_OrderMessage *)message;
/**
 IM状态改变回调
 
 @param status 状态
 */
- (void)statusChange:(NtalkerIMStatus)status siteId:(NSString *)siteId;

@end

@interface NtalkerIMCenter : NSObject
@property (nonatomic, weak) id<NtalkerIMCenterDelegate> delegate;
+ (instancetype)sharedIMCenter;

/**
 连接IM

 @param siteInfo 站点配置
 */
- (void)connectIMWithSiteInfo:(NtalkerSiteInfo *)siteInfo;

/**
 发送消息

 @param message 消息内容
 @param siteInfo 站点配置
 */
- (void)sendMessage:(NSDictionary *)message siteInfo:(NtalkerSiteInfo *)siteInfo;
///登出IM
- (void)logoutIM;
///断开连接
- (void)disconnect;
@end

