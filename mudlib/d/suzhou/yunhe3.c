// Room: /d/suzhou/yunhe3.c

inherit ROOM;

void create()
{
	set("short", "�˺�");
	set("long", @LONG
�˺��ϱ����죬һ��������ͷ�������������񣬷�����ˡ�ԶԶһֻľ��
ʻ�˹�������û���㿴�����У�ȴ��˳����ȥ��Ӱ����������ǧ���˺��治֪
ǰ�˻��˶��پ����ŵ��Խ��ɡ�������������и�̾���ѡ�
LONG
	);
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
}
void init()
{
    object me;
    string str;
    me=this_player();
    if(me->query_temp("yz_sz")==1)  {
		str="/d/suzhou/yunhe4";
                    }
    if(me->query_temp("yz_sz")==2)  {
		str="/d/yangzhou/yunhe2";
                    }
	call_out("yz_sz",5,str,me);
}
void yz_sz(string str,object me)
{
    me->move(str);
}
