//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZViewController.h>

@class FFHeColorEffect, NSArray;

__attribute__((visibility("hidden")))
@interface FFColorBaseViewController : OZViewController
{
    FFHeColorEffect *_colorEffect;
    NSArray *_colorEffects;
    CDStruct_cb905f8c _base_state;
}

- (BOOL)isAllMediaOnline;
- (BOOL)isAppointedFromOrganizer;
- (BOOL)isAppointedFromSequenceProject;
- (id)colorEffects;
- (id)colorEffect;
- (void)dealloc;

@end

