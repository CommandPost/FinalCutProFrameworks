//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorContainerController.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _FFLibraryMinorContainerController : FFInspectorContainerController
{
    NSString *_textDescription;
    NSMutableArray *_locations;
}

+ (Class)classForHeaderController;
@property(readonly, nonatomic) NSArray *locations; // @synthesize locations=_locations;
- (void)removeAllLocations;
- (void)replaceLocations:(id)arg1;
- (void)addLocation:(id)arg1;
- (void)setTextDescription:(id)arg1;
- (void)_rebuildControllers;
- (void)dealloc;
- (id)init;

@end

