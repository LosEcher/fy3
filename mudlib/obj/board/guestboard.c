inherit BULLETIN_BOARD;

void create()
{
        set_name("�ÿ����԰�", ({ "board" }) );
        set("location", "/d/wiz/wizroom");
        set("board_id", "guestboard");
        set("long",
                "����ר��������Ҹ���ʦ��������ͽ�������԰塣\n
�򱾰岻����ɾ����ǰ���ԣ�������ú��ٶ���(post).\n" );
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
