// �嶾�������԰� by ksusan 7/12/97
inherit BULLETIN_BOARD;

void create()
{
	set_name("����ʯ", ({ "stone" }) );
        set("location", "/d/wudu/liangtin");
        set("board_id", "wuduboard");
        set("long",
		"����һ�龧Ө��͸����ɫ��ʯ���ഫ�Ƿ���ʯ������\n
		���嶾���ӷ����ĵ���ᣬ��̾������������԰�(help board)��\n" );
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
