//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, SKBuiltinBuffer_t;

__attribute__((visibility("hidden")))
@interface PushLoginURLRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasUserName:1;
    unsigned int hasAutoAuthTicket:1;
    unsigned int hasClientId:1;
    unsigned int hasRandomEncryKey:1;
    unsigned int hasOpcode:1;
    unsigned int hasDeviceName:1;
    unsigned int hasAutoAuthKey:1;
    unsigned int opcode;
    BaseRequest *baseRequest;
    NSString *userName;
    NSString *autoAuthTicket;
    NSString *clientId;
    SKBuiltinBuffer_t *randomEncryKey;
    NSString *deviceName;
    SKBuiltinBuffer_t *autoAuthKey;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetAutoAuthKey:) SKBuiltinBuffer_t *autoAuthKey; // @synthesize autoAuthKey;
@property(readonly, nonatomic) BOOL hasAutoAuthKey; // @synthesize hasAutoAuthKey;
@property(retain, nonatomic, setter=SetDeviceName:) NSString *deviceName; // @synthesize deviceName;
@property(readonly, nonatomic) BOOL hasDeviceName; // @synthesize hasDeviceName;
@property(nonatomic, setter=SetOpcode:) unsigned int opcode; // @synthesize opcode;
@property(readonly, nonatomic) BOOL hasOpcode; // @synthesize hasOpcode;
@property(retain, nonatomic, setter=SetRandomEncryKey:) SKBuiltinBuffer_t *randomEncryKey; // @synthesize randomEncryKey;
@property(readonly, nonatomic) BOOL hasRandomEncryKey; // @synthesize hasRandomEncryKey;
@property(retain, nonatomic, setter=SetClientId:) NSString *clientId; // @synthesize clientId;
@property(readonly, nonatomic) BOOL hasClientId; // @synthesize hasClientId;
@property(retain, nonatomic, setter=SetAutoAuthTicket:) NSString *autoAuthTicket; // @synthesize autoAuthTicket;
@property(readonly, nonatomic) BOOL hasAutoAuthTicket; // @synthesize hasAutoAuthTicket;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
