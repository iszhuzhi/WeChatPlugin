//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VoipMonoMsg;

@protocol VoipGetRoomInfoCgiDelegate <NSObject>
- (void)onVoipGetRoomInfoCgiOk:(VoipMonoMsg *)arg1;
- (void)onVoipGetRoomInfoCgiRespFailed:(VoipMonoMsg *)arg1;
- (void)onVoipGetRoomInfoCgiRespNull:(VoipMonoMsg *)arg1;
- (void)onVoipGetRoomInfoCgiConnectFailed:(VoipMonoMsg *)arg1;
- (void)onVoipGetRoomInfoCgiCreateFailed:(VoipMonoMsg *)arg1;
- (void)onVoipGetRoomInfoCgiParaError:(VoipMonoMsg *)arg1;
@end
