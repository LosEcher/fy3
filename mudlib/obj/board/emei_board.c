//��ü�ɵ����԰� by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("��ü�����",({"stone"}));
set("location","/d/emei/jinding");
set("board_id","emei_board");
        set("long",
"һ������ɫ�ľ�ʯ,һ�汻����ƽ��,�������Щ�ּ�.(help board)\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
