  //   Wangzc kunlun's ������԰�
inherit BULLETIN_BOARD;

void create()
{
	set_name("Īа��ƤƤ³������",({"book"}));
	set("location","/u/wangzc/workroom");
		set("board_id","wzc&ppl");
        set("long",
		"˽�����飬����͵��������(help board)��\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
