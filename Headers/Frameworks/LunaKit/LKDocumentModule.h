//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LunaKit/LKViewModule.h>

@class LKDocument;

@interface LKDocumentModule : LKViewModule
{
    LKDocument *_document;
    BOOL _installed;
    void *_reserved7;
    void *_reserved8;
    void *_reserved9;
}

- (void)moduleLayoutWillChange:(id)arg1;
- (void)_setInstalled:(BOOL)arg1;
- (BOOL)_installed;
- (id)label;
- (id)configurationDictionary;
- (BOOL)loadView;
- (id)nibOwner;
- (void)setDocument:(id)arg1;
- (id)document;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end

