//���շ����԰�.by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("�����",({"stone"}));
set("location","/d/lingjiu/dating");
set("board_id","lingjiu_board");
        set("long",
"�����ؾ����г����ľ޴���ʯ.��Ʈ������չ���ȴ\n
����������������.(help board)\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
