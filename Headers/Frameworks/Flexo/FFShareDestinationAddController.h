//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFShareDestinationController.h>

@class NSMutableSet;

@interface FFShareDestinationAddController : FFShareDestinationController
{
    double _tileViewWidthDuringLastLayout;
    unsigned long long _columnCountDuringLastLayout;
    NSMutableSet *_selectedTiles;
    CDUnknownBlockType _addDestinationCallback;
}

@property(copy, nonatomic) CDUnknownBlockType addDestinationCallback; // @synthesize addDestinationCallback=_addDestinationCallback;
- (void)_updateButtonPositions:(BOOL)arg1;
- (void)_handleFrameChanged:(id)arg1;
- (void)addDestinationsForSelectedTiles;
- (void)deselectAllTiles;
- (void)deselectTile:(id)arg1;
- (void)selectTile:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (id)selectedDestinationTypes;
- (id)selectedTiles;
- (void)loadView;
- (void)dealloc;
- (id)initWithDestination:(id)arg1 withSource:(id)arg2;

@end
