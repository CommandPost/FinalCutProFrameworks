//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKSource, FFShareExportMediaDestination;

__attribute__((visibility("hidden")))
@interface FFShareDestinationVideoPresetsMakerFactory : NSObject
{
    FFShareExportMediaDestination *_destination;
    CKSource *_source;
}

@property(retain, nonatomic) CKSource *source; // @synthesize source=_source;
@property(retain, nonatomic) FFShareExportMediaDestination *destination; // @synthesize destination=_destination;
- (Class)makerClass;
- (id)possibleClasses;
- (id)newVideoPresetsMaker;
- (void)dealloc;
- (id)initWithDestination:(id)arg1 source:(id)arg2;
- (id)init;

@end
