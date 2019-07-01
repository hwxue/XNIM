//
//  NtalkerPushManager.h
//  NtalkerPush
//
//  Created by 张二猛 on 2018/11/1.
//  Copyright © 2018年 zem. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^SuccessBlock)(id respone);
typedef void(^FailureBlock)(NSError *error);


@protocol NtalkerPushManagerDelegate <NSObject>
///进后台状态上报结果回调
- (void)ntalker_pushBackReportResult:(BOOL)result;
///进入前台状态上报结果回调
- (void)ntalker_pushForeReportResult:(BOOL)result;

@end

@interface NtalkerPushManager : NSObject

@property (nonatomic, weak) id<NtalkerPushManagerDelegate> delegate;

+ (instancetype)sharedPushManager;

/**
 上传服务器deviceToken
 
 @param deviceToken deviceToken
 @param isProduction 是否生产状态
 */

- (void)ntalker_pushDeviceToken:(NSData *)deviceToken isProduction:(BOOL)isProduction;

/**
 上报IM状态
 
 @param userId 访客ID
 @param siteId 企业ID
 @param deviceToken deviceToken
 @param status 是否进入推送  0不进入推送 1进入推送
 */
- (void)ntalker_pushReportDeviceStatusWithUserId:(NSString *)userId siteId:(NSString *)siteId deviceToken:(NSString *)deviceToken status:(int)status success:(SuccessBlock)success failure:(FailureBlock)failure;

/**
 解绑推送服务
 
 @param userId 访客ID
 @param siteId 企业ID
 @param deviceToken deviceToken
 */
- (void)ntalker_pushRemoveDeviceStatusWithUserId:(NSString *)userId siteId:(NSString *)siteId deviceToken:(NSString *)deviceToken;


/**
 应用后台推过来的推送消息
 
 @param userInfo 推送消息
 */
- (void)ntalker_pushDidReceiveRemoteNotification:(NSDictionary *)userInfo;


@end


