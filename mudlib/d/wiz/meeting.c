// music   wiz's ��ʦ������
inherit ROOM;

void create()
{
	set("short", "��ʦ������");
	set("long", @LONG
	��������ʦ�����ң�����ʦ��������Ϸ��չ�����Ƶĳ�����
����һ�����л�����룬���Ը�λ�����Լ��ˡ������ⷢ��߼���
����ʦ���԰������ԡ���λ����ܾ���������չ����ȣ���ñ�
�����ʦ��Ϊ���˳����������ˡ�

LONG 
);

	set("exits", ([ /* sizeof() == 1 */
	"down" : "/d/zhongzhou/yinghaoup" ]));

	set("valid_startroom", 1);
	set("no_fight", "1");
	set("no_clean_up", 0);
	setup();

        call_other("/obj/board/wizboard", "???");
}

void init()
{
	object me=this_player();
	if( !wizardp(me)&& me->query("id")!="ouyangxiu")
		me->move("/d/zhongzhou/yinghaoup");
}

