//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface FFShareSourceDestinationMapping : NSObject
{
    NSMapTable *_mapDestinationToSource;
}

@property(retain, nonatomic) NSMapTable *mapDestinationToSource; // @synthesize mapDestinationToSource=_mapDestinationToSource;
- (id)sourceForDestination:(id)arg1;
- (void)associateDestination:(id)arg1 withSource:(id)arg2;
- (id)init;
- (void)dealloc;

@end

