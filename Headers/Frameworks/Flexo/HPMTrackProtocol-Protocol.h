//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/NSObject-Protocol.h>

@class NSString;
@protocol HPMComponentProtocol;

@protocol HPMTrackProtocol <NSObject>
@property(readonly) long long displayPositionForLastDecodeSample;
@property(readonly) long long displayPositionForFirstDecodeSample;
@property(readonly) unsigned long long componentCount;
@property(readonly) long long dataByteCount;
@property(readonly) float bytesPerSecond;
@property(readonly) long long editDuration;
@property(readonly) CDStruct_2689111f editRate;
@property(retain) NSString *name;
@property(readonly) int trackType;
- (int)stepInPresentationOrder:(long long)arg1 stepsTaken:(long long *)arg2 cursor:(struct HPMEditCursor *)arg3;
- (int)stepInDecodeOrder:(long long)arg1 stepsTaken:(long long *)arg2 cursor:(struct HPMEditCursor *)arg3;
- (long long)decodePositionForDisplayPosition:(long long)arg1 cursor:(const struct HPMEditCursor *)arg2;
- (void)addComponent:(id <HPMComponentProtocol>)arg1;
- (id <HPMComponentProtocol>)componentAtIndex:(unsigned long long)arg1;

@optional
- (long long)componentIndexWithPosition:(long long)arg1 componentStart:(long long *)arg2;
@end

