// thd_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("��ǽ", ({ "fen qiang","qiang" }) );
	set("location", "/u/aug/thd/hall" );
//	set("location", "/d/thd/hall" );
	set("board_id", "thd_b");
	set("long", 
"�������ǽ�������кܶ��һ����ӵ�ī����
��Ҫ��Ը�⣬Ҳ��������������һ�ʡ�\n" );
	setup();
	set("capacity", 100);
	replace_program(BULLETIN_BOARD);
}

