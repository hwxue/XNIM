//
// Created by gordon on 2018/5/29.
// Copyright (c) 2018 NTalker. All rights reserved.
//字段名不要随便修改！！！！

#import <Foundation/Foundation.h>


@interface NtalkerTemplateRecord : NSObject
/** 接待组id */
@property (copy, nonatomic) NSString *templateId;
/** 接待组 名称 */
@property (copy, nonatomic) NSString *templateName;
/** 消息内容 */
@property (copy, nonatomic) NSString *msgContent;
/** 息 时间 */
@property (copy, nonatomic) NSString *msgTime;
/** 客服id */
@property (nonatomic, copy) NSString *kefuId;
/** 客服名称 */
@property (nonatomic, copy) NSString *kefuName;
/** 客服头像*/
@property (copy, nonatomic) NSString *kefuPortrait;
/** 消息未读数 */
@property (copy, nonatomic) NSString *unreadCount;



@end
