//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZASMasterAudioTrack.h>

@class NSString, OZASFrame;

@interface OZASAudioTrack : OZASMasterAudioTrack
{
    OZASFrame *_inPoint;
    OZASFrame *_outPoint;
    NSString *_name;
    int _index;
}

- (id)init;
- (void)setPan:(double)arg1;
- (double)getPan;
- (void)setLevel:(double)arg1;
- (double)getLevel;
- (void)setInPoint:(id)arg1;
- (id)getInPoint;
- (void)setOutPoint:(id)arg1;
- (id)getOutPoint;
- (void)setName:(id)arg1;
- (id)getName;
- (void)setIndex:(int)arg1;
- (int)getIndex;
- (id)objectSpecifier;

@end
