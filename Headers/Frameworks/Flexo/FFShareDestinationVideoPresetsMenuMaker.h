//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface FFShareDestinationVideoPresetsMenuMaker : NSObject
{
    BOOL _useTheDoesntFitWarning;
    NSArray *_destinations;
    NSArray *_sources;
}

@property(nonatomic) BOOL useTheDoesntFitWarning; // @synthesize useTheDoesntFitWarning=_useTheDoesntFitWarning;
@property(copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(copy, nonatomic) NSArray *destinations; // @synthesize destinations=_destinations;
- (id)sourceForDestination:(id)arg1;
- (void)setDoesntFitWarningForDestination:(id)arg1;
- (id)updateVideoPresetsMenuWithPopupButton:(id)arg1 target:(id)arg2 selectSetting:(id)arg3;
- (id)renderFormatNameForStompSetting:(id)arg1 destination:(id)arg2 source:(id)arg3;
- (unsigned long long)indexOfDefaultSelectedItemWithDestination:(id)arg1 renderFormatForLastDestination:(id)arg2 items:(id)arg3;
- (id)savedRenderFormatName;
- (BOOL)anyAreExportingBroadcast;
- (id)presetsMenuWithTarget:(id)arg1;
- (id)presetsMenuWithItems:(id)arg1 target:(id)arg2;
- (id)makerWithDestination:(id)arg1;
- (id)presetsForAllDestinations;
- (void)addSameAsSourceOptionWithPresetsArray:(id)arg1 intersectionSet:(id)arg2;
- (id)intersectionOfSets:(id)arg1;
- (void)dealloc;
- (id)init;

@end
