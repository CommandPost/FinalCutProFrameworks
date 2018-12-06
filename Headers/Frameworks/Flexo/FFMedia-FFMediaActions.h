//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMedia.h>

@interface FFMedia (FFMediaActions)
- (BOOL)actionAddMarkerWithRange:(CDStruct_e83c9415)arg1 error:(id *)arg2;
- (BOOL)actionAddMarkerToAnchoredObject:(id)arg1 withRange:(CDStruct_e83c9415)arg2 error:(id *)arg3;
- (BOOL)actionPasteMarker:(id)arg1 toAnchoredObject:(id)arg2 withRange:(CDStruct_e83c9415)arg3 error:(id *)arg4;
- (BOOL)actionRemoveMarker:(id)arg1 error:(id *)arg2;
- (BOOL)actionChangeMarkerTypeToTodo:(id)arg1 error:(id *)arg2;
- (BOOL)actionChangeMarkerTypeToNote:(id)arg1 error:(id *)arg2;
- (BOOL)actionMarkMarkerAsCompleted:(BOOL)arg1 marker:(id)arg2 error:(id *)arg3;
- (BOOL)actionChangeMarkerDisplayName:(id)arg1 marker:(id)arg2 error:(id *)arg3;
- (BOOL)actionMoveMarker:(id)arg1 toRange:(CDStruct_e83c9415)arg2 error:(id *)arg3;
- (BOOL)constrainAddMarkerWithRange:(CDStruct_e83c9415 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (BOOL)actionAddFavoriteWithRange:(CDStruct_e83c9415)arg1 markerCategory:(id)arg2 animationHint:(id)arg3 error:(id *)arg4;
- (BOOL)actionAddKeywordsWithNames:(id)arg1 forRange:(CDStruct_e83c9415)arg2 animationHint:(id)arg3 error:(id *)arg4;
- (BOOL)actionAddAnalysisKeywords:(id)arg1 forRange:(CDStruct_e83c9415)arg2 animationHint:(id)arg3 error:(id *)arg4;
- (BOOL)actionRemoveKeywordsWithNames:(id)arg1 forRange:(CDStruct_e83c9415)arg2 animationHint:(id)arg3 error:(id *)arg4;
- (BOOL)actionRenameKeywordWithName:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (BOOL)actionRemoveKeywordsWithNames:(id)arg1 error:(id *)arg2;
- (BOOL)actionHideRange:(CDStruct_e83c9415)arg1 hidden:(BOOL)arg2 error:(id *)arg3;
@end

