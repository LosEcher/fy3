inherit BULLETIN_BOARD;
void create()
{
        set_name("��ʦ���԰�", ({ "board" }) );
        set("location", "/d/wiz/meeting");
        set("board_id", "wizboard");
        set("long",
                "���Ǹ���ʦ�����Լ��µ�С�ڰ塣\n" );
        setup();
          set("capacity", 300);
        replace_program(BULLETIN_BOARD);
}
