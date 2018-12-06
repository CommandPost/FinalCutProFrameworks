//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFOutlineViewLayout, NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface FFOutlineViewRow : NSObject
{
    FFOutlineViewLayout *_superlayout;
    double _rowHeight;
    BOOL _selected;
    BOOL _highlightedForDrop;
    BOOL _editing;
    NSString *_lastEditingString;
}

- (id)initWithRowHeight:(double)arg1;
- (void)dealloc;
@property(readonly, nonatomic) double layoutHeight;
@property(readonly, nonatomic) FFOutlineViewLayout *sublayout;
@property(readonly, nonatomic) BOOL isExpandable;
@property(nonatomic, getter=isExpanded) BOOL expanded;
@property(readonly, nonatomic) NSIndexPath *indexPath;
@property(copy, nonatomic) NSString *lastEditingString; // @synthesize lastEditingString=_lastEditingString;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic, getter=isHighlightedForDrop) BOOL highlightedForDrop; // @synthesize highlightedForDrop=_highlightedForDrop;
@property(nonatomic) FFOutlineViewLayout *superlayout; // @synthesize superlayout=_superlayout;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;

@end

