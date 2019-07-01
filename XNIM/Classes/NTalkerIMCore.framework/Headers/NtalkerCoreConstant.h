//
//  NtalkerCoreConstant.h
//  NTalkerIMCore
//
//  Created by wzh on 2018/6/14.
//  Copyright © 2018年 NTalker. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NtalkerConfigureInfo.h"


typedef NS_ENUM(NSUInteger, Ntalker_ClientType){
    ClientType_CustomerService = 1,
    ClientType_Guest = 2,
    ClientType_Robot = 3,//不做集成使用
};

typedef NS_ENUM(NSInteger,remoteNotifyType) {
    //接收会话列表(正在进行的会话列表)
    remoteNotifyConversationList = 5000,
    //接收会话信息
    remoteNotifyConversationInformation = 5001,
    //接受历史会话列表
    remoteNotifyUserHistoryConversations = 5002,
    //接收会话消息
    remoteNotifySendMessage = 5003,
    //会话消息预知事件
    remoteNotifyOnPredictMessage = 5004,
    //接收评价内容
    remoteNotifyEvaluationInfo = 5005,
    //会话成员信息变化事件
    remoteNotifyConversationMemberInfo = 5006,
    //会话终止事件
    remoteNotifyConversationTerminated = 5007,
    //接收干系人信息变化事件
    remoteNotifyUserInformation = 5008,
    //接收系统通知
    remoteNotifyNotification = 5009,
    //接收访客排队信息
    remoteNotifyQueueInformation  = 5010,
    //接收访客主动退出排队结果
    remoteNotifyExitQueue = 5011,
    //机器人转人工失败
    remoteNotifyRobotSwitchArtiFail = 5026,
    //强制评价
    remoteNotifyEnforcementConversationEvaluated = 5030,
    //访客接收邀请评价会话
    remoteNotifyInviteConversationEvaluation = 5031,
    //接收企业行政组列表结果
    remoteNotifyGetGroupListResult = 6000,
    //接收组在线干系人列表结果
    remoteNotifyGetGroupUsersResult = 6001,
    //接收48小时待处理列表
    remoteNotifyPendingConversation = 6002,
    //接收已超时的待处理访客
    remoteNotifyTimeoutCustomer = 6003,
    //接收全局系统消息
    remoteNotifySystemMessage = 6201,
    //干系人发起一个视频聊天 6301
    remoteNotifyStreamMedia = 6301,
    //干系人响应视频聊天结果 6302
    remoteNotifyCallBackStreamMedia = 6302,
    //干系人离开视频聊天 6303
    remoteNotifyLeaveStreamMedia = 6303,
    //当视频会话中少于两人时，中止视频聊天 6304
    remoteNotifyStopStreamMedia = 6304,
    //获取干系人待处理的视频聊天列表 6305
    remoteNotifyGetStreamMedia = 6305,
    //不同设备同账号消息下行
    remoteNotifyTypeSendMessage = 3006,
    
};

typedef NS_ENUM (NSInteger ,methodCode){
    //IM向待客云通知干系人与IM的连接状态
    remoteIMLinkStatusChanged = 2000,
    //查询干系人信息
    remoteGetUser = 2001,
    //更改干系人状态
    remoteChangeUserStatus = 2002,
    
    //查询历史会话列表
    remoteGetUserHistoryConversations = 3000,
    //查询未销毁会话列表
    remoteGetUserConversation = 3001,
    //查询会话信息
    remoteGetConversationInfo = 3002,
    //请求会话资源
    remoteRequestChat = 3003,
    //请求加入会话
    remoteJoinConversation = 3004,
    //进入会话（打开聊窗）
    remoteEnterConversation = 3005,
    //发送会话消息
    remoteSendMessage = 3006,
    //干系人离开会话（关闭聊窗）
    remoteLeaveConversation = 3007,
    //干系人退出会话
    remoteExitConversation = 3008,
    
    //终止正在进行的会话
    remoteTerminateConversation = 3012,
    //增加会话成员
    remoteAddConversationMember = 3013,
    //移除会话成员
    remoteRemoveConversationMember = 3014,
    
    //消息预知
    remoteOnPredictMessage = 3016,
    //会话成员禁言/解禁
    remoteDisableSendMsg = 3017,
    //主动退出排队
    remoteExitQueue = 3018,
    
    //质检会话
    remoteQualityConversation = 3201,
    //总结会话
    remoteSummaryConversation = 3202,
    //邀请评价会话
    remoteInviteEvaluationConversation = 3203,
    //评价会话
    remoteEvaluationConversation = 3204,
    
    //获取企业行政组列表
    remoteGetGroupList = 4000,
    //获取组在线干系人列表
    remoteGetGroupUsers = 4001,
    //获取已销毁的会话列表
    remoteGetPendingConversation = 4002,
};

#ifndef NtalkerCoreConstant_h
#define NtalkerCoreConstant_h

//字符串保护
#define NtalkerProStr(str) ((str)?:@"")


//通知中心快捷初始化宏
#define NtalkerNotificitionCenter [NSNotificationCenter defaultCenter]

#endif /* NtalkerCoreConstant_h */




