//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCollectionView.h"

@class LKMenu;

@interface OZAudioListCollectionView : NSCollectionView
{
    LKMenu *_objectMenu;
    BOOL _editingText;
}

- (id)newItemForRepresentedObject:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingEnded:(id)arg1;
@property(nonatomic) BOOL editingText; // @synthesize editingText=_editingText;

@end
