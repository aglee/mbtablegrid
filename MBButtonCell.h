//
//  MBButtonCell.h
//  MBTableGrid
//
//  Created by Brendan Duddridge on 2014-10-28.
//
//

#import "MBTableGridEditable.h"
#import <AppKit/AppKit.h>

@interface MBButtonCell : NSButtonCell <MBTableGridEditable>

@property (nonatomic, strong) NSImage *accessoryButtonImage;

#pragma mark - MBTableGridEditable

@property (nonatomic, assign, readonly) BOOL editOnFirstClick;
@property (nonatomic, strong) NSColor *borderColor;

@end
