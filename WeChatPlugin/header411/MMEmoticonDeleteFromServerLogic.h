//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMEmoticonServerNotifyTask.h"

@class NSArray;

@interface MMEmoticonDeleteFromServerLogic : MMEmoticonServerNotifyTask
{
    NSArray *_m_deleteMd5Array;
    id <MMEmoticonDeleteFromServerLogicDelegate> _m_delegate;
}

@property(nonatomic) __weak id <MMEmoticonDeleteFromServerLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSArray *m_deleteMd5Array; // @synthesize m_deleteMd5Array=_m_deleteMd5Array;
- (void).cxx_destruct;
- (unsigned char)resumeLogic;
- (id)initWithDelegate:(id)arg1 md5ObjectArray:(id)arg2;

@end

