//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

__attribute__((visibility("hidden")))
@interface DownloadVoiceRequest : PBGeneratedMessage
{
    unsigned int hasMsgId:1;
    unsigned int hasOffset:1;
    unsigned int hasLength:1;
    unsigned int hasClientMsgId:1;
    unsigned int hasBaseRequest:1;
    unsigned int hasNewMsgId:1;
    unsigned int hasChatRoomName:1;
    unsigned int hasMasterBufId:1;
    unsigned int msgId;
    unsigned int offset;
    unsigned int length;
    NSString *clientMsgId;
    BaseRequest *baseRequest;
    unsigned long long newMsgId;
    NSString *chatRoomName;
    unsigned long long masterBufId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetMasterBufId:) unsigned long long masterBufId; // @synthesize masterBufId;
@property(readonly, nonatomic) BOOL hasMasterBufId; // @synthesize hasMasterBufId;
@property(retain, nonatomic, setter=SetChatRoomName:) NSString *chatRoomName; // @synthesize chatRoomName;
@property(readonly, nonatomic) BOOL hasChatRoomName; // @synthesize hasChatRoomName;
@property(nonatomic, setter=SetNewMsgId:) unsigned long long newMsgId; // @synthesize newMsgId;
@property(readonly, nonatomic) BOOL hasNewMsgId; // @synthesize hasNewMsgId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
@property(retain, nonatomic, setter=SetClientMsgId:) NSString *clientMsgId; // @synthesize clientMsgId;
@property(readonly, nonatomic) BOOL hasClientMsgId; // @synthesize hasClientMsgId;
@property(nonatomic, setter=SetLength:) unsigned int length; // @synthesize length;
@property(readonly, nonatomic) BOOL hasLength; // @synthesize hasLength;
@property(nonatomic, setter=SetOffset:) unsigned int offset; // @synthesize offset;
@property(readonly, nonatomic) BOOL hasOffset; // @synthesize hasOffset;
@property(nonatomic, setter=SetMsgId:) unsigned int msgId; // @synthesize msgId;
@property(readonly, nonatomic) BOOL hasMsgId; // @synthesize hasMsgId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

