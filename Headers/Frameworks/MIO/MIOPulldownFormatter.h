//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

__attribute__((visibility("hidden")))
@interface MIOPulldownFormatter : NSFormatter
{
    BOOL _useColons;
}

- (BOOL)useColons;
- (void)setUseColons:(BOOL)arg1;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)init;

@end

