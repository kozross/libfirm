/*
* Project:     libFIRM
* File name:   ir/ir/iredgekinds.h
* Purpose:     Everlasting outs -- edge kinds
* Author:      Sebastian Hack
* Created:     24.05.2006
* CVS-ID:      $Id$
* Copyright:   (c) 1998-2005 Universitaet Karlsruhe
* Licence:     This file protected by GPL -  GNU GENERAL PUBLIC LICENSE.
*/

#ifndef _FIRM_IR_EDGE_KINDS_H
#define _FIRM_IR_EDGE_KINDS_H

enum _ir_edge_kind_t {
	EDGE_KIND_NORMAL,
	EDGE_KIND_BLOCK,
	EDGE_KIND_DEP,
	EDGE_KIND_LAST
};

typedef enum _ir_edge_kind_t ir_edge_kind_t;

/*
 * It's ugly but we need this forward ref in irnode_t.h 
 */
void edges_notify_edge_kind(ir_node *src, int pos, ir_node *tgt, ir_node *old_tgt, ir_edge_kind_t kind, ir_graph *irg);


#endif  /* _FIRM_IR_EDGE_KINDS_H */
