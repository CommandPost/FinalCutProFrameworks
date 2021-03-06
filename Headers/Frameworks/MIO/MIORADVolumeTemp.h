//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIO/MIORADVolume.h>

@class MIORADPathPack, NSString;

@interface MIORADVolumeTemp : MIORADVolume
{
    MIORADPathPack *_pathPack;
    NSString *_state;
    NSString *_name;
}

+ (id)volumeWithPath:(id)arg1 icon:(id)arg2 undoManager:(id)arg3;
- (id)path;
- (void)cancelMount;
- (void)setState:(id)arg1;
- (id)state;
- (id)name;
- (void)dealloc;
- (id)initWithPath:(id)arg1 icon:(id)arg2 undoManager:(id)arg3;

@end

