//
//  NtalkerSiteInfo.h
//  NTalkerIMCore
//
//  Created by wzh on 2019/4/11.
//  Copyright © 2019 NTalker. All rights reserved.
//

#import <Foundation/Foundation.h>


//连接状态
typedef enum : NSUInteger {
    NtalkerIMStatusDisabled = 0, //IM不可用
    NtalkerIMStatusAvailable,   //IM可用
} NtalkerIMStatus;

@interface NtalkerSiteInfo : NSObject
#pragma mark - 公共参数
///用户唯一标示
@property (nonatomic, copy) NSString *ntid;
///企业唯一标示
@property (nonatomic, copy) NSString *siteId;
/**主站点 ID:BBC版本为：平台ID ,B2C版本为：siteId*/
@property (nonatomic, copy) NSString *platformId;
///登录IM必选参数
@property (nonatomic, copy) NSString *token;
///IM连接地址(tcp)
@property (nonatomic, copy) NSString *imAddress;
///IM服务地址（http）
@property (nonatomic, copy) NSString *imHttpAddress;
@property (nonatomic, copy) NSString *sessionId;
///本地消息版本号
@property (nonatomic, assign) unsigned long long localMaxVersion;
///消息拉取间隔
@property (nonatomic, assign) unsigned long long nextCheckInterval;

#pragma mark - 访客端参数
///当前咨询的接待组ID
@property (nonatomic, copy) NSString *currentTemplateId;
///是否自动连接  1：自动连接  0：非直接连接
@property (assign, nonatomic) NSInteger autoConnect;
///是否有咨询,既：5001下行消息
@property (nonatomic, assign, getter=isHaveConsulting) BOOL haveConsulting;
@end

