//lu's �һ��������԰�
inherit BULLETIN_BOARD;

void create()
{
	set_name("÷��¼",({"board"}));
	set("location","/d/meizhuang/caoting");
	set("board_id","meizhuangboard");
        set("long",
	"÷ׯ��ׯ�����Դ��Ƶ����ң�÷ׯ���ӿ������淢����⡣\n");
        setup();
	set("capacity",100);
        replace_program(BULLETIN_BOARD);
}
