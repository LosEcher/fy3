// thd_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("粉墙", ({ "fen qiang","qiang" }) );
	set("location", "/u/aug/thd/hall" );
//	set("location", "/d/thd/hall" );
	set("board_id", "thd_b");
	set("long", 
"这是面粉墙，上面有很多桃花弟子的墨宝。
你要是愿意，也可以在这里留下一笔。\n" );
	setup();
	set("capacity", 100);
	replace_program(BULLETIN_BOARD);
}

