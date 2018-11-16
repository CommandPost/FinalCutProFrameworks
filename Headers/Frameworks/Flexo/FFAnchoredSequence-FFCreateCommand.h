//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredSequence.h>

@interface FFAnchoredSequence (FFCreateCommand)
- (BOOL)operationChangeEffectForTransitionObjectsOnSpineObject:(id)arg1 spineObjectsToAddTransition:(id)arg2 effects:(id)arg3 transitionOverlapType:(int)arg4 error:(id *)arg5;
- (id)_abuttingObjectsInLaneForObject:(id)arg1 withSelection:(id)arg2 before:(BOOL)arg3 after:(BOOL)arg4 abuttingObjects:(id)arg5;
- (BOOL)_collapseTargets:(id)arg1 intoSpine:(id)arg2;
- (BOOL)_operationAddTransitionsToObjectsOnSpineObject:(id)arg1 spineObjectsToAddTransition:(id)arg2 before:(BOOL)arg3 after:(BOOL)arg4 spineTransitionClipsCreated:(id *)arg5 effects:(id)arg6 transitionDuration:(CDStruct_1b6d18a9)arg7 transitionOverlapType:(int)arg8 spareTransition:(id)arg9 reportErrors:(BOOL)arg10 error:(id *)arg11;
- (BOOL)operationAddTransitionsToObjectsOnSpineObject:(id)arg1 spineObjectsToAddTransition:(id)arg2 before:(BOOL)arg3 after:(BOOL)arg4 spineTransitionClipsCreated:(id *)arg5 effects:(id)arg6 transitionDuration:(CDStruct_1b6d18a9)arg7 transitionOverlapType:(int)arg8 reportErrors:(BOOL)arg9 error:(id *)arg10;
- (BOOL)operationAddTransitionsToSpineObjects:(id)arg1 before:(BOOL)arg2 after:(BOOL)arg3 effects:(id)arg4 transitionOverlapType:(int)arg5 transitionsCreated:(id *)arg6 rootItem:(id)arg7 reportErrors:(BOOL)arg8 error:(id *)arg9;
- (BOOL)actionAddTransitionsToSpineObjects:(id)arg1 before:(BOOL)arg2 after:(BOOL)arg3 effects:(id)arg4 transitionOverlapType:(int)arg5 transitionsCreated:(id *)arg6 rootItem:(id)arg7 reportErrors:(BOOL)arg8 error:(id *)arg9;
- (BOOL)operationAddGeneratorsBeforeAndAfterObjectsOnSpineObject:(id)arg1 spineObjectsToAddTransition:(id)arg2 before:(BOOL)arg3 after:(BOOL)arg4 generatorEffect:(id)arg5 generatorDuration:(CDStruct_1b6d18a9)arg6 error:(id *)arg7;
- (BOOL)actionAddGeneratorObjects:(id)arg1 before:(BOOL)arg2 after:(BOOL)arg3 generatorEffect:(id)arg4 generatorDuration:(CDStruct_1b6d18a9)arg5 rootItem:(id)arg6 error:(id *)arg7;
- (BOOL)operationChangeTransitionObjectsOnSpineObjectOverlapType:(id)arg1 spineObjectsToChange:(id)arg2 transitionOverlapType:(int)arg3 error:(id *)arg4;
- (BOOL)actionSetTransitionOverlapType:(id)arg1 transitionOverlapType:(int)arg2 error:(id *)arg3;
@end

