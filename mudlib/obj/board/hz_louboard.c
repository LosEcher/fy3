//����¥��¥���԰� by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("����ʯ",({"stone"}));
set("location","/d/hangzhou/erlou");
set("board_id","hz_louboard");
        set("long",
"ʯ��ƽ��,������Щ��Ȼ�Ļ���,��˵�������������ʯ.\n
������������.(help board).\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
