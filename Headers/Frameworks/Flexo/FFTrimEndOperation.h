//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFTrimOperation.h>

__attribute__((visibility("hidden")))
@interface FFTrimEndOperation : FFTrimOperation
{
    CDStruct_e83c9415 _initialTrimmedRange;
    CDStruct_1b6d18a9 _trimmedEnd;
}

- (void)updateActualTrimmedDelta;
- (void)commitChanges;
- (void)constrainTrimmedEndToUntrimmedEnd;
- (void)constrainTrimmedEndToTrimmedStart;
- (void)constrain;
- (void)trim;
- (void)align;
- (void)setup;
- (void)main;

@end

