//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZChanLabelController.h"

@class FFHeColorEffect, NSArray;

__attribute__((visibility("hidden")))
@interface FFColorBaseLabelController : OZChanLabelController
{
    FFHeColorEffect *_colorEffect;
    NSArray *_colorEffects;
    CDStruct_cb905f8c _base_state;
}

- (void)dealloc;
- (id)colorEffect;
- (id)colorEffects;
- (BOOL)isAppointedFromSequenceProject;
- (BOOL)isAppointedFromOrganizer;
- (BOOL)isAllMediaOnline;
- (BOOL)isLeftJustified;

@end
