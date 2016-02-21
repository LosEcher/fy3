// thd:testsword.c
// 97.7.14 by Aug

#include <ansi.h>
inherit ROOM;

void create()
{
      set("short", "�Խ�ͤ");
	set("long", @LONG
��������ɫ�����ͤ�ӡ�����ʯ����������һ������(duilian) ��ͤ
�ڸ�����һ��ľ�ң�������顰�Խ�ͤ������׭�֣������پ�����������
κ����磬�����ǻƵ������ֱʡ�����ͤ��˵���ϵ��������������Ƿ���
����û��ʲô̫�����װ��Ʒ�ˡ���������Ƭ�һ���Ӱ��Ȼ����һ�壬һ
�п���������ô����Ȼ�����������˵�һ��˽�������ʧ��һ�ɶ�����
���ɵı���Ȼ�������������һ����ĵ��ƶ������ͣ��Խ�ͤ�Ķ������
�����ͱڣ�֮�¾��ǲ�����ӿ�Ĵ󺣡�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/huang_yaoshi" :  1,
//	]));

	set("detail", ([ /* sizeof() == 1 */
		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
      ]));

      set("exits", ([ /* sizeof() == 1 */
          "west" : __DIR__"front_testsword",
	]));
      
	setup();
}

void init()
{
	add_action("do_lian", "lian");
	add_action("do_lian", "practice");
}

int do_lian(string arg)
{
	object me;
	string skillname;
	int skill, skill_basic;

	me=this_player();

	seteuid(getuid());
	
	if (me->is_busy())
		return notify_fail("��������æ���ء�\n");

	if( me->is_fighting() )
		return notify_fail("���Ѿ���ս�����ˣ�ѧһ��ʵս����ɡ�\n");

	if( !arg ) return ("/cmds/std/enable")->main(me, arg);

	if( (skillname = me->skill_mapped(arg)) == arg )
		return notify_fail("��ֻ����ϰ�� enable ָ�������⼼�ܡ�\n");

	notify_fail("���������������ϰ����ܡ�\n");
	if( !SKILL_D(skillname)->valid_learn(me) ) return 0;
	
	skill_basic = me->query_skill(arg, 1);
	skill = me->query_skill(skillname, 1);

	if( skill < 1 )
		return notify_fail("�����û��ѧ�᡹����ܰɣ������ȥ��̱��ˡ�\n");
	if( skill_basic < 1 )
		return notify_fail("����ⷽ��ļ��ܻ���һ�ϲ�ͨ����ô��ȴӻ���ѧ��\n");
	
	if( SKILL_D(skillname)->practice_skill(me) ) {
		if ( skill > skill_basic * 3 / 2 ) {
			write( HIB "���" + to_chinese(skillname) + "���������ϰ��Ƶģ�û�����κ��¶����ˣ�\n" NOR);
			return 1;
		}

		if(skillname=="luoying-sword")
			me->improve_skill(skillname, (skill_basic/5 +1)*2);		
		else
			me->improve_skill(skillname, skill_basic/5 +1);		

		write( HIY "���" + to_chinese(skillname) + "�����ˣ�\n" NOR);
		return 1;
	}
	else return 0;
}





