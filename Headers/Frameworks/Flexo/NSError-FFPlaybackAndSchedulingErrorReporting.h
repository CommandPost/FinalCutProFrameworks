//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (FFPlaybackAndSchedulingErrorReporting)
+ (id)ffPlaybackAndSchedulingError:(int)arg1 time:(CDStruct_1b6d18a9)arg2 frameDur:(CDStruct_1b6d18a9)arg3 sourceURL:(id)arg4 info:(id)arg5 details:(id)arg6 underlyingErrors:(id)arg7;
+ (id)ffCoreMediaOriginatedError:(int)arg1 time:(CDStruct_1b6d18a9)arg2 frameDur:(CDStruct_1b6d18a9)arg3 sourceURL:(id)arg4 info:(id)arg5 details:(id)arg6 underlyingErrors:(id)arg7;
- (BOOL)nsErrorRepresentsTransientFlexoError;
@end

