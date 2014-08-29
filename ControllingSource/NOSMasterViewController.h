//
//  NOSMasterViewController.h
//  ControllingSource
//
//  Created by Luca on 29/08/14.
//  Copyright (c) 2014 Luca Giordano. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface NOSMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
