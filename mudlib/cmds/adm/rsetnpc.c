// ���п�����NPC���������á����а�����
// ɾ�����е��̡�������ļ��е�KZZNPC��AREA���롢
// ����NPC���书�ȼ�������㼰����־��
#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	string *dir,name,bangzhu,bz_id;
	object npc,lp;
	int i,skills_lv,exp_lv,j;
	mapping data,skl;
	string *npc_bh=({"����","���½�","ؤ��","��ػ�"});
	string *skl_name;

// step 1 delete all area files
	dir=get_dir("/data/area/",0);
	if(! dir)	dir=({});
	for(i=0;i<sizeof(dir);i++)
		rm("/data/area/"+dir[i]);

// step 2 delete all KZZNPC and AREA from banghui files
	dir=get_dir("/data/guild/",0);
	if(! dir)	dir=({});
	lp=new("/obj/lingpai");
	for(i=0;i<sizeof(dir);i++)	{
	if(sscanf(dir[i],"%s.o",name)==1)	{
		lp->create(name);
		lp->delete("npc");
		lp->delete("area");
		if(member_array(name,npc_bh)!=-1)	{
			bangzhu=lp->query("bangzhu");
			bz_id=lp->query("bangzhu_id");
			data=([]);
			data[bz_id]=bangzhu;
			lp->set("npc",data);
		}
		lp->save();
	}
	}
	destruct(lp);

//step 3 reset KZZNPC's skills_lv,exp and banghui;

	dir=get_dir("/data/npc/",0);
	if(! dir)	dir=({});
	npc=new("/obj/stand");
	for(i=0;i<sizeof(dir);i++)	{
	if(sscanf(dir[i],"%s.o",name)==1)	{
		npc->create(name);
		npc->delete("banghui");
		skills_lv=(int)npc->query("skills_lv");
		if( !skills_lv)	skills_lv=10;
		exp_lv=(int)npc->query("exp_lv");
		if( !exp_lv)		exp_lv=1000;
		npc->set("combat_exp",exp_lv);
		skl=npc->query_skills();
		if( sizeof(skl))	{
			skl_name=keys(skl);
			for(j=0;j<sizeof(skl_name);j++)	{
				npc->delete_skill(skl_name[j]);
				npc->set_skill(skl_name[j],skills_lv);
			}
		}
		write(npc->query("name")+"\n");
		npc->save();
	}
	}
	destruct(npc);
	write("KZZNPC RESET OK!\n");
	return 1;
}


