//��ɽ�����԰� by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("ǧ����ľ��",({"board"}));
set("location","/d/songshan/chanyuan");
set("board_id","songshan_board");
        set("long",
"���ǧ�����ľ�Ѿ���ή����,���е�һ�α��˰�������Ƥ.\n
�ֿ���ʮ�˺ϱ�����ľ����Ȼ�����԰�.(help board)\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
