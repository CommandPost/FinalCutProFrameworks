//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMediaSidebarSectionNode.h>

__attribute__((visibility("hidden")))
@interface FFMediaSidebarLibrarySectionNode : FFMediaSidebarSectionNode
{
}

- (void)_handleActionPerformed:(id)arg1;
- (void)_handleDocumentRemoved:(id)arg1;
- (void)_handleLibrariesUpgraded:(id)arg1;
- (void)_handleDocumentAdded:(id)arg1;
- (void)stopObservingChildNodes;
- (void)startObservingChildNodes;
- (void)updateChildNodes;
- (void)_updateProChildNodes;
- (void)_updateConsumerChildNodes;
- (void)_updateLibraryDocumentNodes;
- (id)_copyAllLibraries;
- (void)_removeLibraryDocument:(id)arg1;
- (id)_addLibraryDocument:(id)arg1;
- (struct _NSRange)_libraryDocumentRange;
- (unsigned long long)_libraryDocumentStartIndex;
- (BOOL)allowsContextMenu;
- (id)title;

@end

