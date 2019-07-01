#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Ntalker.h"
#import "NtalkerChatDelegate.h"
#import "NtalkerChatParams.h"
#import "NtalkerConsultRecord.h"
#import "NTalkerGuestIMKit.h"
#import "NtalkerLeaveMessageController.h"
#import "NtalkerTrailModel.h"
#import "NtalkerUIConfig.h"
#import "MessageType.h"
#import "NSObject+NTalkerClass.h"
#import "NSObject+NTalkerCoding.h"
#import "NSObject+NTalkerKeyValue.h"
#import "NSObject+NTalkerProperty.h"
#import "NSString+NTalkerExtension.h"
#import "NtalkerASLLogCapture.h"
#import "NtalkerASLLogger.h"
#import "NtalkerAssertMacros.h"
#import "NTalkerChatTableHeaderModel.h"
#import "NtalkerCocoaLumberjack.h"
#import "NtalkerConfigureInfo.h"
#import "NtalkerCoreConstant.h"
#import "NtalkerCoreLog.h"
#import "NtalkerCoreMessage.h"
#import "NtalkerDBManager.h"
#import "NtalkerDeviceModel.h"
#import "NtalkerErrorCode.h"
#import "NtalkerEvaluateSetInfoModel.h"
#import "NtalkerEventModel.h"
#import "NTalkerExtension.h"
#import "NTalkerExtensionConst.h"
#import "NtalkerFileLogger.h"
#import "NtalkerFlashServerModel.h"
#import "NtalkerHTTPReportPushStatusTool.h"
#import "NtalkerHTTPTool.h"
#import "NtalkerIMCenter.h"
#import "NTalkerIMCore.h"
#import "NtalkerLeaveMsgDetailModel.h"
#import "NtalkerLeaveMsgSetInfoModel.h"
#import "NtalkerLog.h"
#import "NtalkerLogLib.h"
#import "NtalkerLogMacros.h"
#import "NtalkerLogTag.h"
#import "NTalkerProperty.h"
#import "NTalkerPropertyKey.h"
#import "NTalkerPropertyType.h"
#import "NtalkerSDKCore.h"
#import "NtalkerSiteInfo.h"
#import "NtalkerStorageManager.h"
#import "NtalkerTemplateRecord.h"
#import "NtalkerTTYLogger.h"
#import "NtalkerUserInfo.h"
#import "NtalkerUtilityHelper.h"
#import "NtalkerPush.h"
#import "NtalkerPushManager.h"
#import "WBIMManager.h"

FOUNDATION_EXPORT double XNIMVersionNumber;
FOUNDATION_EXPORT const unsigned char XNIMVersionString[];

