//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIO/MIOObject.h>

#import <MIO/NSCoding-Protocol.h>

@class NSMutableArray, NSUndoManager;

@interface MIOAudioChannelGroup : MIOObject <NSCoding>
{
    NSMutableArray *_channels;
    unsigned int _layout;
    NSUndoManager *_undoManager;
}

+ (id)audioChannelGroup;
- (id)undoManager;
- (void)setUndoManager:(id)arg1;
- (unsigned int)channelCount;
- (unsigned long long)count;
- (unsigned int)layout;
- (void)setLayout:(unsigned int)arg1;
- (void)removeChannel:(id)arg1;
- (void)addChannel:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

